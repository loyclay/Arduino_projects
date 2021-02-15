import serial
import numpy as np
import tk_tools
import tkinter as tk
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import matplotlib as mpl
mpl.use("TkAgg", "2TkAgg")

# Declare global variables
data = np.array([])
condition = False

# connect arduino via serial port
arduino = serial.Serial("COM6", 9600)

# plot your data


def plot_data():
    global condition, data
    if (condition == True):
        a = arduino.readline()  # read data from arduino
        # convert data to integer
        b = int(float(a[0:len(a)-2].decode("utf-8")))
        a.decode()  # decode for a later use
        print(b)
        ss.set_value(str(b))  # set the value to seven segment display

        if(len(data) < 100):
            data = np.append(data, float(a[0:4]))
        else:
            data[0:99] = data[1:100]
            data[99] = float(a[0:4])
            lines.set_xdata(np.arange(0, len(data)))
            lines.set_ydata(data)
            canvas.draw()
            # after method every 1ms
            window.after(1, plot_data)

# start plot


def start_plot():
    global condition
    condition = True
    start_button.config(state="disabled")
    stop_button.config(state='normal')
    arduino.reset_input_buffer()

# pause the data plot


def stop_plot():
    global condition
    condition = False
    stop_button.config(state="disabled")
    start_button.config(state='normal')


# exit
def close_window():
    arduino.close()
    window.destroy()


# Main GUI code
window = tk.Tk()
window.title("Sensor data plot")
window.configure(background="white")
window.geometry("900*700")

# create a plot object on GUI
fig = Figure(figsize=(8, 4), dpi=100)  # add a figure canvas
ax = fig.add_subplot(111)
# display only 100 samples
ax.set_title("Ping sensor data")
# display only 100 samples
ax.set_xlabel("Time")
ax.set_ylabel("Distance (cm)")
ax.grid(True, linestyle='')
ax.set_xlim(0, 100)
ax.set_ylim(0, 500)  # change this value according to your data
lines = ax.plot([], [], color='C2', marker='o', markersize=6)[0]

canvas = FigureCanvasTkAgg(fig, master=window)  # A tkinter drawing area
canvas.get_tk_widget().grid(row=0, column=0, rowspan=2,
                            columnspan=2, padx=30, pady=30)
canvas.draw()

# create buttons and other widgets
start_button = tk.Button(window, text="Start data logging: ",
                         font=("Verdana", 14),
                         padx=10, pady=10, bg="green", fg="white",
                         command=lambda: start_plot())
stop_button = tk.Button(window, text="pause data logging", font=("Verdana", 14),
                        padx=10, pady=10, bg="red", fg="white",
                        command=lambda: stop_plot())
button_exit = tk.Button(window, text="Exit", font=("Verdana", 14),
                        padx=10, pady=10,
                        command=lambda: close_window())
name_tag = tk.Label(window, text ="proximity distance from your sensor", font =("Verdana", 18), bg = "White")

ss = tk_tools.SevenSegmentDigits(window, digits=4, background="white", digit_color="black", height=60)


# pack all your widgets
start_button.grid(row=3, column=0, pady=20)
stop_button.grid(row=3, column=1, pady =20)
button_exit.grid(row=4, column =0, columnspan=2)
name_tag.grid(row=2, column=0, columnspan=2)
ss.grid(row=2, column=1, pady=10)

arduino.reset_input_buffer()
window.after(1, plot_data) # plot data every microsecond


# execute the mainloop
window.mainloop()