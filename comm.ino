/************NOTES************
Command format: command(argument)

Available commands:
setmsg1(a message) //Sets message 1
setmsg2(a message) //Sets message 2
setmsg3(a message) //Sets message 3

*****************************/


String read_command;
String read_arg;

void get_command()
{
  while(Serial.available() > 0) //If there is data to be received
  {
    read_command = Serial.readStringUntil('(');

    if(read_command == "setmsg1")
    {
      msg1 = Serial.readStringUntil(')');
      Serial.write("Message 1 set");
    }
    else if(read_command == "setmsg2")
    {
      msg2 = Serial.readStringUntil(')');
      Serial.write("Message 2 set");
    }
    else if(read_command == "setmsg3")
    {
      msg3 = Serial.readStringUntil(')');
      Serial.write("Message 3 set");
    }
  }
}
