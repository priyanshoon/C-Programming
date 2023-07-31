#include <stdio.h>
#include <stdlib.h>

struct Room {
  float width;
  float length;
  float height;
  char *name;
};

struct House {
  char *address;
  struct Room *room[10];
};

void printHouse(struct House house);

int main() {
  struct House h;
  h.address = "Dhadka Road Asansol";
  for (int i = 0; i < 10; i++) {
    h.room[i] = NULL;
  }

  struct Room hall;
  hall.width = 10;
  hall.length = 12;
  hall.height = 9;
  hall.name = "Hall";

  h.room[0] = &hall;

  printHouse(h);

  return 0;
}

void printHouse(struct House house) {
  printf(house.address);
  printf("\n");
  for (int i = 0; i < 10; i++) {
    if (house.room[i] != NULL) {
      struct Room r = *house.room[i];
      printf("Room #%d: %s\n", i, r.name);
    }
  }
}
