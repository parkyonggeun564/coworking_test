#include <iostream>

int main()
{
    std::cout << "GUGUDAN" << "\n";
    while (1) {
        int dan_start, dan_end, step_start, step_end;

        std::cout << "dan_start/end : ";
        std::cin >> dan_start >> dan_end;

        if (dan_start <= 1)
        {
            return 0;
        }

        std::cout << "step_start/end : ";
        std::cin >> step_start >> step_end;

        if (dan_start != 1)
        {
            std::cout << "dan : " << dan_start << "~" << dan_end << ", " << "step : " << step_start << "~" << step_end << std::endl;
            for (int x = step_start; x <= step_end; x++)
            {
                for (int y = dan_start; y <= dan_end; y++)
                {
                    std::cout << y << "*" << x << "=" << y * x << "\t";
                }
                std::cout << "\n";
            }
            std::cout << "\n";
        }
    }
}