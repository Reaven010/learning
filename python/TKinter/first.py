import tkinter as tk

root=tk.Tk()
root.title("my GUi")
root.geometry("400x400")
l1=tk.Label(root,text="click the button")
l1.pack()
i=0
l2=tk.Label(root,text="")
l2.pack()
def click():
    global i
    i+=1
    l2.config(text="you clicked the button "+str(i)+" times")
button=tk.Button(root,text="click me",command=click)
button.pack()
root.mainloop()