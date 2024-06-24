const int ledPin = 7;
const int dotDuration = 250;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkMorse('H');
  blinkMorse('e');
  blinkMorse('l');
  blinkMorse('l');
  blinkMorse('o');
  blinkMorse(' ');

  delay(2000);
}

void blinkMorse(char letter) {
  switch (letter) {
    case 'A': case 'a': blink(".-"); break;
    case 'B': case 'b': blink("-..."); break;
    case 'C': case 'c': blink("-.-."); break;
    case 'D': case 'd': blink("-.."); break;
    case 'E': case 'e': blink("."); break;
    case 'Ə': case 'ə': blink("._._._."); break;
    case 'F': case 'f': blink("..-."); break;
    case 'G': case 'g': blink("--."); break;
    case 'H': case 'h': blink("...."); break;
    case 'I': case 'i': blink(".."); break;
    case 'J': case 'j': blink(".---"); break;
    case 'K': case 'k': blink("-.-"); break;
    case 'L': case 'l': blink(".-.."); break;
    case 'M': case 'm': blink("--"); break;
    case 'N': case 'n': blink("-."); break;
    case 'O': case 'o': blink("---"); break;
    case 'P': case 'p': blink(".--."); break;
    case 'Q': case 'q': blink("--.-"); break;
    case 'R': case 'r': blink(".-."); break;
    case 'S': case 's': blink("..."); break;
    case 'T': case 't': blink("-"); break;
    case 'U': case 'u': blink("..-"); break;
    case 'V': case 'v': blink("...-"); break;
    case 'W': case 'w': blink(".--"); break;
    case 'X': case 'x': blink("-..-"); break;
    case 'Y': case 'y': blink("-.--"); break;
    case 'Z': case 'z': blink("--.."); break;
    case ' ': delay(3 * dotDuration); break;
    default: delay(3 * dotDuration); break;
  }
  delay(dotDuration);
}

void blink(const char* morseCode) {
  for (int i = 0; morseCode[i] != '\0'; ++i) {
    if (morseCode[i] == '.') {
      digitalWrite(ledPin, HIGH);
      delay(dotDuration);
      digitalWrite(ledPin, LOW);
    } else if (morseCode[i] == '-') {
      digitalWrite(ledPin, HIGH);
      delay(3 * dotDuration);
      digitalWrite(ledPin, LOW);
    }
    delay(dotDuration);
  }
}
