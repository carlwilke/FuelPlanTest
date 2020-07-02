#pragma once

class FuelPlan
{
private:
	int FuelIn = 0;
	int FuelBurnGround = 0;
	int FuelRampOut = 0;
	int FuelUpliftLiter = 0;
	int FuelUpliftCalculated = 0;
	int FuelUpliftActual = 0;
	int FuelUpliftDiff = 0;
	int FuelDiffLow = 0;
	int FuelDiffHigh = 0;
	bool isImperial = false;
	bool isVolumeError = false;
	bool isPercentError = false;
	bool useMassCheck = true;
	double FuelGravity = 0.0;
	double FuelDifferencePercent = 0.0;
	double FuelDiffPercentMargin = 0.0;

public:

	FuelPlan();
	FuelPlan(int fuelHigh, int fuelLow, double diffPercent, bool massError);

};