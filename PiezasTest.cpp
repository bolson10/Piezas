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

TEST(PiezasTest, check_if_dropPiece_returns_X)
{
  Piezas game;
  ASSERT_EQ(game.dropPiece(0),X);
}
TEST(PiezasTest, check_if_dropPiece_returns_O)
{
  Piezas game;
  game.dropPiece(0);
  ASSERT_EQ(game.dropPiece(0),O);
}
TEST(PiezasTest, check_if_dropPiece_catches_out_of_bounds_value_low)
{
	Piezas game;
	ASSERT_EQ(game.dropPiece(-2),Invalid);
}

TEST(PiezasTest, check_if_dropPiece_catches_out_of_bounds_value_high)
{
  Piezas game;
  game.dropPiece(0);
  ASSERT_EQ(game.dropPiece(4),Invalid);
}

TEST(PiezasTest, check_if_dropPiece_returns_blank_on_full_column)
{
	Piezas game;
	game.dropPiece(0);
	game.dropPiece(0);
	game.dropPiece(0);
	ASSERT_EQ(game.dropPiece(0),Blank);
}
TEST(PiezasTest, check_if_pieceAt_catches_out_of_bounds_value_high)
{
	Piezas game;
	ASSERT_EQ(game.pieceAt(4,4),Invalid);
}
TEST(PiezasTest, check_if_pieceAt_catches_out_of_bounds_value_low)
{
  Piezas game;
  ASSERT_EQ(game.pieceAt(-1,-1),Invalid);
}

TEST(PiezasTest, check_if_dropPiece_works_row0_col0)
{
	Piezas game;
	ASSERT_EQ(game.dropPiece(0),X);
}

TEST(PiezasTest, check_if_pieceAt_works_row1_col0)
{
	Piezas game;
	game.dropPiece(0);
	game.dropPiece(0);
	ASSERT_EQ(game.pieceAt(1,0),O);
}

TEST(PiezasTest, check_if_pieceAt_works_row2_col0)
{
	Piezas game;
	game.dropPiece(0);
	game.dropPiece(0);
	game.dropPiece(0);
	ASSERT_EQ(game.pieceAt(2,0),X);
}

TEST(PiezasTest, check_if_pieceAt_works_row0_col1)
{
	Piezas game;
	game.dropPiece(1);
	ASSERT_EQ(game.pieceAt(0,1),X);
}

TEST(PiezasTest, check_if_pieceAt_works_row1_col1)
{
	Piezas game;
	game.dropPiece(1);
	game.dropPiece(1);
	ASSERT_EQ(game.pieceAt(1,1),O);
}

TEST(PiezasTest, check_if_pieceAt_works_row2_col1)
{
	Piezas game;
	game.dropPiece(1);
	game.dropPiece(1);
	game.dropPiece(1);
	ASSERT_EQ(game.pieceAt(2,1),X);
}

TEST(PiezasTest, check_if_pieceAt_works_row0_col2)
{
	Piezas game;
	game.dropPiece(2);
	ASSERT_EQ(game.pieceAt(0,2),X);
}

TEST(PiezasTest, check_if_pieceAt_works_row1_col2)
{
	Piezas game;
	game.dropPiece(2);
	game.dropPiece(2);
	ASSERT_EQ(game.pieceAt(1,2),O);
}

TEST(PiezasTest, check_if_pieceAt_works_row2_col2)
{
	Piezas game;
	game.dropPiece(2);
	game.dropPiece(2);
	game.dropPiece(2);
	ASSERT_EQ(game.pieceAt(2,2),X);
}

TEST(PiezasTest, check_reset)
{
	Piezas game;
	game.dropPiece(0);
	game.dropPiece(0);
	game.dropPiece(0);
	game.reset();
	ASSERT_EQ(game.pieceAt(1,0),Blank);

}
TEST(PiezasTest, check_if_gameState_sees_unfinished_game)
{
  Piezas game;
  game.dropPiece(0);
  ASSERT_EQ(game.gameState(),Invalid);
}

TEST(PiezasTest, check_if_gameState_works_win_O)
{
  Piezas game;
  game.dropPiece(0);
  game.dropPiece(1);
  game.dropPiece(0);
  game.dropPiece(2);
  game.dropPiece(2);
  game.dropPiece(3);
  game.dropPiece(3);
  game.dropPiece(1);
  game.dropPiece(3);
  game.dropPiece(2);
  game.dropPiece(1);
  game.dropPiece(0);
  ASSERT_EQ(game.gameState(),O);
}


TEST(PiezasTest, check_if_gameState_works_win_X)
{
  Piezas game;
  game.dropPiece(3);
  game.dropPiece(3);
  game.dropPiece(2);
  game.dropPiece(2);
  game.dropPiece(1);
  game.dropPiece(1);
  game.dropPiece(0);
  game.dropPiece(3);
  game.dropPiece(0);
  game.dropPiece(2);
  game.dropPiece(1);
  game.dropPiece(0);
  ASSERT_EQ(game.gameState(),X);
}
 TEST(PiezasTest, check_if_gameState_works_tie)
 {
 Piezas game;
 game.dropPiece(3);
 game.dropPiece(2);
 game.dropPiece(3);
 game.dropPiece(2);
 game.dropPiece(3);
 game.dropPiece(2);
 game.dropPiece(1);
 game.dropPiece(0);
 game.dropPiece(1);
 game.dropPiece(0);
 game.dropPiece(1);
 game.dropPiece(0);
 ASSERT_EQ(game.gameState(),Blank);
 }

 