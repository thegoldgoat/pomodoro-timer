#include <ncurses.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  initscr();
  cout << "Hello world!" << endl;
  endwin();
}