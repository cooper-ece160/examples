#include <vector>
#include <cstdio>

class MyInt {
public:
  int i;
  MyInt(int ii) { i = ii; }
  MyInt(const MyInt &other) {
    i = other.i;
    std::printf("Copying %d from %p to %p\n",
      i, &other.i, &i);
  }
  ~MyInt() {
    std::printf("Deleting %d at %p\n", i, &i);
  }
};

int main() {
    std::vector<MyInt> v;
    // reserve memory so no copying happens on push_back
    v.reserve(3);
    for (int i = 0; i < 3; i++) {
      printf("Inserting %d at %p\n", i, &i);
      v.push_back(i);
      // HERE
    }
    return 0;
}