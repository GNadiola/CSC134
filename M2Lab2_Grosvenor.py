import turtle             # Allows us to use turtles
wn = turtle.Screen()      # Creates a playground for turtles
t = turtle.Turtle()    # Create a turtle, assign to alex

#commands from here to the last line can be replaced

#add some display options
t.pensize(4)
t.pencolor("orange")
t.shape("turtle")
#t.screensize(canvwidth=500, canvheight=500, bg=None)

#now draw a playstation sign
t.begin_fill()
t.fillcolor("red")
t.penup()
t.goto(0, 400)
t.pendown()
t.goto(400, 0)
t.goto(0, -400)
t.goto(-400, 0)
t.goto(0, 400)
t.end_fill()
t.penup()
t.goto(0, 0)
t.pendown()
t.pencolor("yellow")
t.begin_fill()
t.fillcolor("orange")
t.goto(0, 300)
t.goto(-150, 150)
t.goto(0, 0)
t.goto(150, -150)
t.goto(0, -300)
t.goto(0, 0)
t.end_fill()


# end commands
wn.mainloop()             # Wait for user to close window
