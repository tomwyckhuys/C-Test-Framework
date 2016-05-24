#ifndef TEST_HEADER_FILE
#define TEST_HEADER_FILE
struct test {
    void (*sumTest)();
    void (*minusTest)();
    void (*multiplicationTest)();
    void (*divideTest)();
    void (*powerTest) ();
    void (*facultyTest) ();
    void (*writeResult) ();    
};

extern const struct test Test;
#endif
