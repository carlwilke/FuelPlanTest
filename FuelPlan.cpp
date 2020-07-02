#include "FuelPlan.h"

FuelPlan::FuelPlan()
{
	isImperial = false;
	FuelGravity = 0.8;
	FuelDiffHigh = 2000;
	FuelDiffLow = 1000;
	FuelDiffPercentMargin = 0.05;
	useMassCheck = true;
}

FuelPlan::FuelPlan(int fuelHigh, int fuelLow, double diffPercent, bool massError)
{
	FuelDiffHigh = fuelHigh;
	FuelDiffLow = fuelLow;
	FuelDiffPercentMargin = diffPercent;
	useMassCheck = massError;
}
