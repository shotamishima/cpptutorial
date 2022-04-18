#include <string>
#include <chrono>
#include <iostream>

class ProcessingTime {
    public:
        ProcessingTime(const std::string &name = "Process", bool start = true):
            m_name(name),
            m_isActive(start)
            {
                if (start) {
                    this->restart();
                }

            }
        ~ProcessingTime() {
            this->stop();
        }

        void restart()& {
            m_start = std::chrono::system_clock::now();
            m_isActive = true;
        } 
        void stop()& {
            if (!m_isActive) {
                return;
            }
            const auto end = std::chrono::system_clock::now();
            const auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - m_start).count();
            std::cout << elapsed << "[micro seconds]" << std::endl;

            m_isActive = false;
        }


    private:
        std::string m_name;
        std::chrono::system_clock::time_point start, m_start;
        bool m_isActive;
};