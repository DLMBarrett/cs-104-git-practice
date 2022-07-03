# include <iostream>


void print_std_out_bottle_song(int num_beers) {
  const char* bottle_singular = "bottle";
  const char* bottle_plural = "bottles";

  for (int i = num_beers; i > 0; i--) {
    const char* bottle_word = i == 1 ? bottle_singular : bottle_plural;
    //music
    std::cout << i << " " << bottle_word  << " of beer on the wall, " 
      << i << " " << bottle_word << " of of beer.\n";
    std::cout << "Take one down, pass it around, " << i
      << " " << bottle_word << " of beer on the wall...\n";
  }
}

int main() 
{
  print_std_out_bottle_song(1'000'000);
  std::cout << "Go Bruins!!" << std::endl;
}
