#pragma once
#include "DogSprite.h"
class SighthoundSprite : public DogSprite
{
private:
	static const unsigned int SighthoundUActionMapping[];
public:
	virtual void InitPersonalityBiorhythms() override;
	virtual int MapBreedSpecificAction(UAction) override;
	virtual void InitBreedSprite(LoadInfo const&, bool) override;
	virtual void InitBreedSprite(LoadInfo const&, char*, bool, bool) override;
	virtual void ConstructGenome(Genome&) override;
	virtual ~SighthoundSprite() { };
};

