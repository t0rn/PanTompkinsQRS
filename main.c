#include "stdio.h"
#include "panTompkins.h"

#define INPUT_FILE "./examples/test_input.txt"
#define OUTPUT_FILE "./examples/test_output.txt"


int main(int argc, char * argv[])
{
    
    char * input_file;
    char * output_file;
    
    if (argc == 3)
    {
        input_file = argv[1];
        output_file = argv[2];
    }
    else
    {
        input_file = INPUT_FILE;
        output_file = OUTPUT_FILE;
    }
    
    
    panTompkins(input_file,output_file);
    
    return 0;
}
