#include "List.cc"
#include <gtest/gtest.h>

/*
AXIOMS
1. size(new) == 0
2. size(append(L, E)) > 0
3. empty(new) == True
4. empty(append(L, E)) = False
5. head(new) = error
6. head(append(append(new, E), F)) = E  //primer elemento
7. head(append(new,E)) = E
8. tail(new) = error
9. tail(append(L,E)) = L
10.head(tail(append(append(new, E),F))) == 1
*/
// Demonstrate some basic assertions.


TEST(LisTest, Assertions) {
 
  List *a = new List();

  //a->tail();
  EXPECT_TRUE(a->isEmpty());//axioma 1, 3, 8
  int tam = 11;
  for(int i=0;i < tam;i++){
    a->append(i);
    EXPECT_TRUE(size()>0);//axioma 2 y 4

    a->tail();
  } // Expect two strings not to be equal.
  EXPECT_EQ(tam, a->size());
  EXPECT_FALSE(a->isEmpty());
}
