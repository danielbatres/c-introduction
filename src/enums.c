#include <stdio.h>

enum weekDays {
  Sunday,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
};

enum deck {
  club = 0,
  diamonds = 5,
  hearts = 10,
  spades = 15
} card;

int main() {
  enum weekDays today;
  
  today = Sunday;
  
  printf("Day %d", today + 1);
  
  card = spades;
  
  printf("Card power %d", sizeof(card));
  
  return 0;
}