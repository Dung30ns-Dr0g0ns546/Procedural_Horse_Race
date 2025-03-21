#include <random>
#include <iostream>
const int NUM_HORSES = 5;
const int RACE_LENGTH = 15;

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);


void forward(int hn, int *horses){
  if (rand() % 2 == 0) {
        horses[hn] += 1;
  }
}

void printTrackLane(int hn, int *horses){
  for (int i = 0; i < RACE_LENGTH; ++i) {

    if(horses[hn] == i){
      std::cout << hn << " ";
    }else{
      std::cout << ". ";
    }
  }
   std::cout << std::endl;     
}

bool winner(int hn, int* horses){
    bool output = false;

    if(horses[hn] >= RACE_LENGTH){
      output = true;
    }
    return output;
}

int main(){
  int horses[] = {0, 0, 0, 0, 0};
  bool keepGoing = true;

  while (keepGoing){

    for (int hn = 0; hn < NUM_HORSES; hn++){
      forward(hn, horses);
      printTrackLane(hn, horses);

      if (winner(hn, horses)){
        keepGoing = false;
        std::cout << "Horse " << hn << " wins!" << std::endl;
            break;
      } // end if
    } // end for

    std::cout << "Press enter for another turn";
    std::cin.ignore();
} // end while
return 0;
}
