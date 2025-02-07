#include <random>
const int NUM_HORSES = 5;
const int RACE_LENGTH = 15;

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1)

coin = dist(rd);

void forward(hn, horses){
  if (rand() % 2 == 0) {
        position++;

void printTrackLane(hn, horses){
  for (int i = 0; i < positions.size(); ++i) {
        cout << "Horse " << i + 1 << ": ";
        for (int j = 0; j < trackLength; ++j) {
            if (positions[i] == j) {
                cout << i + 1;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

bool winner(hn, horses){
  for (int position : positions) {
        if (position >= trackLength) {
            return true;
        }
    }
    return false;
}

int main()
  int horses[] = {0, 0, 0, 0, 0};
  bool keepGoing = true;

  while (keepGoing){

    for (int hn = 0; hn < NUM_HORSES; hn++){
      forward(hn, horses);
      printTrackLane(hn, horses);
      if (winner(hn, horses)){
        keepGoing = false;
        cout << "Horse " << i + 1 << " wins!" << endl;
            break;
      } // end if
    } // end for

    std::cout << "Press enter for another turn";
    std::cin.ignore();
return 0;
} // end while

