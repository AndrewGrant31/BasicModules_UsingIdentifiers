export module Run;

export import GitHub_Repository_As_Namespace;
export import Includes;

export namespace Run
{
	class App
	{
	private:
		std::unique_ptr<GitHub_Repository_As_Namespace::Input::IsValid> valid_;
		std::unique_ptr<GitHub_Repository_As_Namespace::Hello::HelloWorld> hello_;
	public:
		App ( const std::optional<std::string>& _ = std::nullopt ) :
			valid_ { std::make_unique<GitHub_Repository_As_Namespace::Input::IsValid> (
				_.value_or ( std::string{} ) ) },
			hello_ { std::make_unique<GitHub_Repository_As_Namespace::Hello::HelloWorld> (
				valid_->ToString ( ) ) }
		{

		}

		auto ToString ( ) noexcept -> const auto
		{
			return hello_->Greetings ( );
		}
	};
}
