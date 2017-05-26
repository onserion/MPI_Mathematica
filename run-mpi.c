#include <mpi.h>
#include <stdio.h>

struct params {
   int some_int;
   double some_double;
   double more_params;

}

void readMyParams(int myrank, char *filepath) {
  FILE fp;
  struct param myParams; 
  char *filebuffer;
  fp = fopen(*filepath, "r");
  fread(f, *filebuffer, length, offset);
  
  myParams.some_int = atoi(

}

int main(int argc, char *argv[]){
  int num_processes, myrank;

  MPI_Init(&argc, &argv);

  MPI_Comm_size(MPI_COMM_WORLD, &num_processes);
  MPI_Comm_rank(MPI_COMM_WORLD, &myrank);




}
