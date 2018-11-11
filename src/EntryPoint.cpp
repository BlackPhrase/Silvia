/// @file
/// @brief platform-dependent entry point wrapper

extern int SilviaMain(int argc, char **argv); // NOTE: Your application must provide the implementation of this function

int main(int argc, char **argv)
{
	return SilviaMain(argc, argv);
};

// Special case for Windows OS - pass internal command line arguments to main
#ifdef _WIN32
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	return main(__argc, __argv);
};
#endif