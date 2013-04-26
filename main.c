

/* This is auto-generated code. Edit at your own peril. */
#include <stdio.h>
#include "CuTest.h"


extern void TestLLQueue_offer(CuTest*);
extern void TestLLQueue_cant_poll_with_no_contents(CuTest*);
extern void TestLLQueue_offer_and_poll_item(CuTest*);
extern void TestLLQueue_fifo(CuTest*);
extern void TestLLQueue_remove_item_is_null_when_not_available(CuTest*);
extern void TestLLQueue_remove_item(CuTest*);
extern void TestLLQueue_remove_item_when_it_is_head(CuTest*);


void RunAllTests(void) 
{
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();


    SUITE_ADD_TEST(suite, TestLLQueue_offer);
    SUITE_ADD_TEST(suite, TestLLQueue_cant_poll_with_no_contents);
    SUITE_ADD_TEST(suite, TestLLQueue_offer_and_poll_item);
    SUITE_ADD_TEST(suite, TestLLQueue_fifo);
    SUITE_ADD_TEST(suite, TestLLQueue_remove_item_is_null_when_not_available);
    SUITE_ADD_TEST(suite, TestLLQueue_remove_item);
    SUITE_ADD_TEST(suite, TestLLQueue_remove_item_when_it_is_head);

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\\n", output->buffer);
}

int main()
{
    RunAllTests();
    return 0;
}

