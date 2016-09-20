// Entity.h

#pragma once

using namespace System;

namespace Entity {
#ifndef _User
	#define _User
		class User
		{
			private:
				int id;

			public:
				User();
				int GetId();
				void SetId(int x);
		};
#endif 
}
