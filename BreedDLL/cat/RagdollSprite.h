#pragma once
#include "CatSprite.h"
class RagdollSprite: public CatSprite
{
private:
	static const unsigned int RagdollUActionMapping[];
public:
	virtual void InitPersonalityBiorhythms() override;
	virtual int MapBreedSpecificAction(UAction) override;
	virtual void InitBreedSprite(LoadInfo const&, bool) override;
	virtual void InitBreedSprite(LoadInfo const&, char*, bool, bool) override;
	virtual void ConstructGenome(Genome&) override;
	virtual ~RagdollSprite() { };
};

