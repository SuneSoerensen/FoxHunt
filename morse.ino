
void output_morse_string(String input_string)
/*******************************************************
Outputs input_char to morse_pin as morse code
*******************************************************/
{
  for(int i = 0; i < input_string.length(); i++)
  {
    if(input_string[i] == ' ') //If the current char is a space...
    {
      delay(space_length); //..delay
    }
    else //Otherwise...
    {
      char_to_morse(input_string[i]); //..Convert to morse...
      output_morse_char();            //... and output it!
    }
  }
}


void output_morse_char()
/*******************************************************
...
*******************************************************/
{
  for(int i = 0; i < 6; i++)
  {
    if(current_morse_char[i] == '-') //Long or '-'
    {
      digitalWrite(morse_pin, HIGH);
      delay(dash_length);
      digitalWrite(morse_pin, LOW);
    }
    else if (current_morse_char[i] == '.') //Short or '.'
    {
      digitalWrite(morse_pin, HIGH);
      delay(dot_length);
      digitalWrite(morse_pin, LOW);
    }
    delay(pause_btw_elemnts);
  }
}

void char_to_morse(char a_char)
/*******************************************************
...
*******************************************************/
{
switch (a_char) {
  case 'a':
    current_morse_char[0] = '.';
    current_morse_char[1] = '-';
    current_morse_char[2] = 'n';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'b':
    current_morse_char[0] = '-';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = '.';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'c':
    current_morse_char[0] = '-';
    current_morse_char[1] = '.';
    current_morse_char[2] = '-';
    current_morse_char[3] = '.';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'd':
    current_morse_char[0] = '-';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'e':
    current_morse_char[0] = '.';
    current_morse_char[1] = 'n';
    current_morse_char[2] = 'n';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'f':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '-';
    current_morse_char[3] = '.';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'g':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = '.';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'h':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = '.';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'i':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = 'n';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'j':
    current_morse_char[0] = '.';
    current_morse_char[1] = '-';
    current_morse_char[2] = '-';
    current_morse_char[3] = '-';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'k':
    current_morse_char[0] = '-';
    current_morse_char[1] = '.';
    current_morse_char[2] = '-';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'l':
    current_morse_char[0] = '.';
    current_morse_char[1] = '-';
    current_morse_char[2] = '.';
    current_morse_char[3] = '.';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'm':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = 'n';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'n':
    current_morse_char[0] = '-';
    current_morse_char[1] = '.';
    current_morse_char[2] = 'n';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'o':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = '-';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'p':
    current_morse_char[0] = '.';
    current_morse_char[1] = '-';
    current_morse_char[2] = '-';
    current_morse_char[3] = '.';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'q':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = '.';
    current_morse_char[3] = '-';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'r':
    current_morse_char[0] = '.';
    current_morse_char[1] = '-';
    current_morse_char[2] = '.';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 's':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 't':
    current_morse_char[0] = '-';
    current_morse_char[1] = 'n';
    current_morse_char[2] = 'n';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'u':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '-';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'v':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = '-';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'w':
    current_morse_char[0] = '.';
    current_morse_char[1] = '-';
    current_morse_char[2] = '-';
    current_morse_char[3] = 'n';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'x':
    current_morse_char[0] = '-';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = '-';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'y':
    current_morse_char[0] = '-';
    current_morse_char[1] = '.';
    current_morse_char[2] = '-';
    current_morse_char[3] = '-';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case 'z':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = '.';
    current_morse_char[3] = '.';
    current_morse_char[4] = 'n';
    current_morse_char[5] = 'n';
    break;
  case '0':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = '-';
    current_morse_char[3] = '-';
    current_morse_char[4] = '-';
    current_morse_char[5] = 'n';
    break;
  case '1':
    current_morse_char[0] = '.';
    current_morse_char[1] = '-';
    current_morse_char[2] = '-';
    current_morse_char[3] = '-';
    current_morse_char[4] = '-';
    current_morse_char[5] = 'n';
    break;
  case '2':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '-';
    current_morse_char[3] = '-';
    current_morse_char[4] = '-';
    current_morse_char[5] = 'n';
    break;
  case '3':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = '-';
    current_morse_char[4] = '-';
    current_morse_char[5] = 'n';
    break;
  case '4':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = '.';
    current_morse_char[4] = '-';
    current_morse_char[5] = 'n';
    break;
  case '5':
    current_morse_char[0] = '.';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = '.';
    current_morse_char[4] = '.';
    current_morse_char[5] = 'n';
    break;
  case '6':
    current_morse_char[0] = '-';
    current_morse_char[1] = '.';
    current_morse_char[2] = '.';
    current_morse_char[3] = '.';
    current_morse_char[4] = '.';
    current_morse_char[5] = 'n';
    break;
  case '7':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = '.';
    current_morse_char[3] = '.';
    current_morse_char[4] = '.';
    current_morse_char[5] = 'n';
    break;
  case '8':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = '-';
    current_morse_char[3] = '.';
    current_morse_char[4] = '.';
    current_morse_char[5] = 'n';
    break;
  case '9':
    current_morse_char[0] = '-';
    current_morse_char[1] = '-';
    current_morse_char[2] = '-';
    current_morse_char[3] = '-';
    current_morse_char[4] = '.';
    current_morse_char[5] = 'n';
    break;
}
}
