#pragma once

#include <ode/collision.h>
#include <engine/graphics/ShapeList.hpp>
#include <engine/gameplay/Entity.hpp>

namespace engine
{
	namespace gameplay
	{
		namespace entities
		{
			class Character : public Entity
			{
			public:
				Character();
				virtual ~Character() override;

				virtual void draw() override;

			protected:
				graphics::ShapeList shapeList;
				dGeomID collisionGeomId;

				bool isWalking{ false };
			};
		}
	}
}
