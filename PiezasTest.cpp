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

TEST(PiezasTest, check_if_dropPiece_works_row0_col0)
{
	Piezas game;
	game.dropPiece(0);
	ASSERT_EQ(game.pieceAt(0,0),X);
}

TEST(PiezasTest, check_if_dropPiece_works_row1_col0)
{
	Piezas game;
	game.dropPiece(0);
	game.dropPiece(0);
	ASSERT_EQ(game.pieceAt(1,0),O);
}

TEST(PiezasTest, check_if_dropPiece_works_row2_col0)
{
	Piezas game;
	game.dropPiece(0);
	game.dropPiece(0);
	game.dropPiece(0);
	ASSERT_EQ(game.pieceAt(2,0),X);
}

TEST(PiezasTest, check_if_dropPiece_works_row0_col1)
{
	Piezas game;
	game.dropPiece(1);
	ASSERT_EQ(game.pieceAt(0,1),X);
}

TEST(PiezasTest, check_if_dropPiece_works_row1_col1)
{
	Piezas game;
	game.dropPiece(1);
	game.dropPiece(1);
	ASSERT_EQ(game.pieceAt(1,1),O);
}

TEST(PiezasTest, check_if_dropPiece_works_row2_col1)
{
	Piezas game;
	game.dropPiece(1);
	game.dropPiece(1);
	game.dropPiece(1);
	ASSERT_EQ(game.pieceAt(2,1),X);
}

TEST(PiezasTest, check_if_dropPiece_works_row0_col2)
{
	Piezas game;
	game.dropPiece(2);
	ASSERT_EQ(game.pieceAt(0,2),X);
}

TEST(PiezasTest, check_if_dropPiece_works_row1_col2)
{
	Piezas game;
	game.dropPiece(2);
	game.dropPiece(2);
	ASSERT_EQ(game.pieceAt(1,2),O);
}

TEST(PiezasTest, check_if_dropPiece_works_row2_col2)
{
	Piezas game;
	game.dropPiece(2);
	game.dropPiece(2);
	game.dropPiece(2);
	ASSERT_EQ(game.pieceAt(2,2),X);
}

TEST(PiezasTest, check_reset_on_one_piece)
{
	Piezas game;
	game.dropPiece(0);
	game.reset();
	ASSERT_EQ(game.pieceAt(0,0),Blank);

}