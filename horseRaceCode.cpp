#include <random>
const int NUM_HORSES = 5;
const int RACE_LENGTH = 15;

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1)

coin = dist(rd);

void forward(hn, horses){


int main()
  int horses[] = {0, 0, 0, 0, 0};
  bool keepGoing = true;

  while (keepGoing){

    for (int hn = 0; hn < NUM_HORSES; hn++){
      forward(hn, horses);
      printTrackLane(hn, horses);
      if (winner(hn, horses)){
        keepGoing = false;
      } // end if
    } // end for

    std::cout << "Press enter for another turn";
    std::cin.ignore();

} // end while
