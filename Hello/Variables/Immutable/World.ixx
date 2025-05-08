export module GitHub_Repository_As_Namespace:World;

import Includes;

export namespace GitHub_Repository_As_Namespace
{
	namespace Variables
	{
		auto World() noexcept -> const auto
		{
			return std::string{ "World!" };
		}		
	}
}
