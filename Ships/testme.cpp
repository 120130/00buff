//#include "this/package/foo.h"
#include "board.h"
#include "game.h"
#include "ship.h"
#include "gtest/gtest.h"

namespace {

// The fixture for testing class Foo.
class BoardTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  BoardTest() {
    // You can do set-up work for each test here.
  }

  virtual ~BoardTest() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Foo.
};

// Test for shoot function



// Tests that the Board::shoot() method does 1or0.
TEST_F(BoardTest, MethodShootDoes1or0) {
  //const string input_filepath = "this/package/testdata/myinputfile.dat";
  //const string output_filepath = "this/package/testdata/myoutputfile.dat";

    Board testingBoard('~');
    EXPECT_EQ (false, testingBoard.shoot (2,3));

}
/*
// Tests that Foo does Xyz.
TEST_F(FooTest, DoesXyz) {
  // Exercises the Xyz feature of Foo.
}
*/

}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
