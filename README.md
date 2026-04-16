# Mars_Task2
# Motor Control Project - Number - 2 

So when I started with the code, here is what I was thinking. First up, as a user I had to give an input. So I needed the serial monitor. Then I had to turn the wheels as per the user's input. So I thought I could define functions for each of the user's choices. Forward, Backward, Right and left. I further also added a stop function to stop the motor movements.
I started with trying to first fix the motor into a circuit and then operating it.

I was thinking how to make the motors move. The easiest option was to increase the pace of one wheel and stop the other. But that would not make the body turn and would cause dragging.

So I started trying to make one wheel reverse and the other to move forward. This would help the body to turn left or right.

The code wasn't helping though. The direction wasn't changing. And that meant both motors were turning with different rates in the same direction. So the change occurred finally when I set the digitalMode to LOW. I was trying somehow to get the tinkercad model to work as per the required conditions. I was testing the wiring. I was trying to test the inputs. And finally the tinkercad model operated properly.

Overall I learnt a lot. I was working against time(in my head) and I made a lot of mistakes that I genuinely learnt from. I wish to learn more. I guess mistakes helped me that most here. I took a lot of help from those around me. So that counts for something I believe.

Here are the fundamental mistakes I discovered in my code. Analogue cannot take negative numbers as inputs in it's argument. I didn't realize and I hoped having negative values in Analogue would reverse the direction. That's not how it works. And the enable pins on the L298N are used to control the pace. I connected to the 5V pin. That was another error. And according to the code, reverse function was wrong as well. I didn't say digitalWrite(LOW) and that meant the wheels don't go on reverse. That's the errors I'd found out after I came back to redo the excercise.
