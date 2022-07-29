#include "../lib/libfunc.h"

int main(int argc, char* argv[]) {
   argv[argc - 1][0] = 'x';
   return libfunc(argc - 1);
}
