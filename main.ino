
//Ouput pins:
int morse_pin = 13;

//Time delays:
int words_per_minute = 20;
int dot_length = 1200/words_per_minute; //Source: http://www.arrl.org/files/file/Technology/x9004008.pdf
int dash_length = dot_length*3;
int space_length = dot_length*7;
int pause_btw_elemnts = dot_length;
int pause_btw_chars = dot_length*3;

//Div. vars:
char current_morse_char[6]; //Contains '-', '.' or 'n' which will not be output


//Messages:
String msg1 = "0";
String msg2 = "0";
String msg3 = "0";

void setup()
{
  pinMode(morse_pin,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(100);
}

void loop()
{
  get_command();

if(millis() % 30000 == 0 && millis() > (30000-1)) //Every 30 s
{
  delay(5); //To make sure that the function above only runs once every time
  output_morse_string(msg1);
}

}
