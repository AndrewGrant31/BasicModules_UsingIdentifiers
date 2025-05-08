export module GitHub_Repository_As_Namespace:AcceptableList;

import Includes;

export namespace GitHub_Repository_As_Namespace
{
	namespace Private
	{
		// these are going to be created in the vector,
	// so pop here and declare and initialise them before utilising them
	// in the vector.
	// Amend as you wish
		char apostrophe_{ '\'' };
		char period_{ '.' };
		char hyphen_{ '-' };
		char space_{ ' ' };

		std::vector<char> acceptableChars = { apostrophe_, hyphen_, period_, space_ };
	}
}