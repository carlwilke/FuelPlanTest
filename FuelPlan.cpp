#include "FuelPlan.h"

class FuelPlan
{
public:
	int FuelIn;
	int FuelBurnGround;
	int FuelRampOut;
	int FuelUpliftLiter;
	int FuelUpliftCalculated;
	int FuelUpliftActual;
	int FuelUpliftDiff;
	int FuelDiffLow;
	int FuelDiffHigh;
	bool isImperial;
	bool isVolumeError;
	bool isPercentError;
	bool useMassCheck;
	double FuelGravity;
	double FuelDifferencePercent;
	double FuelDiffPercentMargin;

private:

	FuelPlan()
	{
		isImperial = false;
		FuelGravity = 0.8;
		FuelDiffHigh = 2000;
		FuelDiffLow = 1000;
		FuelDiffPercentMargin = 0.05;
		useMassCheck = true;
	}

	FuelPlan(int fuelHigh, int fuelLow, double diffPercent, bool massError)
	{
		FuelDiffHigh = fuelHigh;
		FuelDiffLow = fuelLow;
		FuelDiffPercentMargin = diffPercent;
		useMassCheck = massError;
	}
};