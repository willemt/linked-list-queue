

/* This is auto-generated code. Edit at your own peril. */
#include <stdio.h>
#include "CuTest.h"


extern void TestLLQueue_offer(CuTest*);
extern void TestLLQueue_cant_poll_with_no_contents(CuTest*);
extern void TestLLQueue_offer_and_poll_item(CuTest*);
extern void TestLLQueue_fifo(CuTest*);


void RunAllTests(void) 
{
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();


    SUITE_ADD_TEST(suite, TestLLQueue_offer);
    SUITE_ADD_TEST(suite, TestLLQueue_cant_poll_with_no_contents);
    SUITE_ADD_TEST(suite, TestLLQueue_offer_and_poll_item);
    SUITE_ADD_TEST(suite, TestLLQueue_fifo);

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

int main(int argc, char **argv)
{
    RunAllTests();
    return 0;
}

