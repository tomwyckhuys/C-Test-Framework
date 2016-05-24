#ifndef CALCULATOR_HEADER_FILE
#define CALCULATOR_HEADER_FILE

struct calculator {
    float (*sum)(float, float);
    float (*minus)(float,float);
    float (*multiply)(float, float);
    float (*divide)(float, float);
    float (*power) (float, int);
    int   (*faculty) (int);
};

extern const struct calculator Calculator;
#endif
