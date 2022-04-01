#pragma once
#include "Entity.h"


class Aircraft : public Entity
{
public:
	enum Type
	{
		Eagle,
		Raptor,
	};

public:

	Aircraft(Type type, Game* game);
	virtual unsigned int getCategory() const;
	
	

private:
	virtual void		drawCurrent();
	virtual void		buildCurrent();
	virtual void		updateCurrent();





private:
	Type				mType;
	std::string			materialName;
};

