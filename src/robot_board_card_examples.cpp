#include <CppUTest/TestHarness.h>

#include "Robot.h"
#include "Board.h"
#include "Card.h"
#include "Coordinate.h"
#include "RobotAction.h"
#include "Direction.h"

TEST_GROUP(r_b_c_e) {
	Board *board;
	Robot *robot;
	Card *card;

	virtual void setup() {
		Coordinate upperRight = Coordinate_create(20,20);
		board = Board_create(upperRight);

		Coordinate startLocation = Coordinate_create(10, 10);
		robot = Robot_create(board, startLocation, N);
	}

	virtual void teardown() {
		Board_destroy(board);
		Robot_destroy(robot);
		Card_destroy(card);
	}
};

TEST(r_b_c_e, move_forward) {
	RobotAction *action = RobotAction_create(Action_move, forward, Size1);
	card = Card_create(action, 960);
	Robot_set_step(robot, 1, card);
	Robot_execute(robot, 1);
	Coordinate expected = Coordinate_create(10, 11);
	CHECK(Robot_is_at(robot, expected));
}
