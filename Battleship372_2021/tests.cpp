//tests.cpp

#pragma once
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Interface.h"

#include "Picker.h"

#include "Placer.h"

TEST_CASE("Interface class tests") {
	Interface a;
	a.addState(1, 1, true, false, 1);
	a.addState(1, 2, true, false, 1);
	a.addState(5, 5, true, false, 2);
	a.addState(10, 10, true, false, 2);
	REQUIRE(a.checkForBoat(1, 1, 1));
	REQUIRE(a.checkForBoat(1, 2, 1));
	REQUIRE(a.checkForBoat(5, 5, 2));
	REQUIRE(a.checkForBoat(10, 10, 2));
}

TEST_CASE("Placer tests") {
	Interface a;
	Placer(a, 1);
	REQUIRE(a.checkForBoat(1, 1, 1));
	REQUIRE(a.checkForBoat(1, 2, 1));
	REQUIRE(a.checkForBoat(2, 2, 1));
	REQUIRE(a.checkForBoat(2, 3, 1));
	REQUIRE(a.checkForBoat(2, 4, 1));
	REQUIRE(a.checkForBoat(3, 3, 1));
	REQUIRE(a.checkForBoat(3, 4, 1));
	REQUIRE(a.checkForBoat(3, 5, 1));
	REQUIRE(a.checkForBoat(4, 4, 1));
	REQUIRE(a.checkForBoat(4, 5, 1));
	REQUIRE(a.checkForBoat(4, 6, 1));
	REQUIRE(a.checkForBoat(4, 7, 1));
	REQUIRE(a.checkForBoat(5, 5, 1));
	REQUIRE(a.checkForBoat(5, 6, 1));
	REQUIRE(a.checkForBoat(5, 7, 1));
	REQUIRE(a.checkForBoat(5, 8, 1));
	REQUIRE(a.checkForBoat(5, 9, 1));
}