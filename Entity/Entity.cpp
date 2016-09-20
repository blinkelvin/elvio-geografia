// This is the main DLL file.

#include "stdafx.h"

#include <cstdlib>
#include <iostream>
#include "Entity.h"

using namespace System;

namespace Entity {
	User::User()
	{
		id = 0;
	}
	void User::SetId(int x)
	{
		id = x;
	}
	int User::GetId()
	{
		return id;
	}
}