#include <CppUTest/TestHarness.h>

#include "Direction.h"

TEST_GROUP(direction) {
};

TEST(direction, counter_clockwise_90) {
	enum Direction r = Direction_rotate(N, counter_clockwise, D90);
	CHECK_EQUAL(W, r);
}

TEST(direction, counter_clockwise_180) {
	enum Direction r = Direction_rotate(W, counter_clockwise, D180);
	CHECK_EQUAL(E, r);
}

TEST(direction, counter_clockwinse_270) {
	enum Direction r = Direction_rotate(S, counter_clockwise, D270);
	CHECK_EQUAL(W, r);
}

TEST(direction, counter_clockwinse_360) {
	enum Direction r = Direction_rotate(W, counter_clockwise, D360);
	CHECK_EQUAL(W, r);
}

TEST(direction, clockwise_90) {
	enum Direction r = Direction_rotate(N, clockwise, D90);
	CHECK_EQUAL(E, r);
}

TEST(direction, clockwise_180) {
	enum Direction r = Direction_rotate(E, clockwise, D180);
	CHECK_EQUAL(W, r);
}

TEST(direction, clockwinse_270) {
	enum Direction r = Direction_rotate(S, clockwise, D270);
	CHECK_EQUAL(E, r);
}

TEST(direction, clockwinse_360) {
	enum Direction r = Direction_rotate(E, clockwise, D360);
	CHECK_EQUAL(E, r);
}
