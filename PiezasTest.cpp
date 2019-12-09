/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
/*
TEST(PiezasTest, check_if_dropPiece_works_row0_col0)
{
	Piezas game;
	game.dropPiece(0);
	ASSERT_TRUE(true);
	//ASSERT_EQ(game.pieceAt(0,0),X);
}
*/

