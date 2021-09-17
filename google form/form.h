#ifndef form_h
#define form_h
class admin;
class student;
struct exam
{
    exam(std::string& question, std::string *arr, int is_true)
    {
		for(int i = 0; i < 4; ++i)
        {
			answer[i] = arr[i];
		}
        this->question = question;
		this-> is_true = is_true;
	}
    std::string question;
    std::string answer[4];
    int is_true;
};



class admin
{
    public:
    ~admin()
    {
        for(int i =0; i < questions.size(); ++i)
        {
            delete questions[i];
        }
    }
    
    void start()
    {
        std::string for_less;
        int count_question;
            
            std::cout << "Enter your subject" << std::endl;
            std::cin >> for_less;
            
            

            if(for_less == "math")
            {
                std::cout << "Enter your question count" << std::endl;
                std::cin >> count_question;
                for(int i = 0; i < count_question; ++i)
                {
                    question_for_math(for_less);
                }
            }
            else if(for_less == "programming")
            {
                std::cout << "Enter your question count" << std::endl;
                std::cin >> count_question;
                for(int i = 0; i < count_question; ++i)
                {
                    question_for_pro(for_less);
                }
            }
            else
            {
                std::cout << "not this less;";
            }
    
    }

    void question_for_math(std::string& for_less)
    {
        fileo.open(for_less + ".txt", std::ios::app);
        std::cin.get();
        std::cout << "Enter question for math" << std::endl;
        std::getline(std::cin,harc);
        fileo << "Question) " << harc << std::endl;
        for(int i = 0, j = 1; i < 4; ++i, ++j)
        {
            std::cout << "Enter answer N = "<< j << std::endl;
            std::getline(std::cin,answer[i]);
            fileo << j << ") ";
            fileo << answer[i] << std::endl;
        }
        std::cout << "Select true answer Number" << std::endl;
        std::cin >> is_true;
        fileo << is_true;
        fileo << '\n';
        questions.push_back(new exam(harc,answer,is_true));
        fileo.close();
    }

    void question_for_pro(std::string& for_less)
    {
        fileo.open(for_less + ".txt", std::ofstream::app);
        std::cin.get();
        std::cout << "Enter question for programming" << std::endl;
        std::getline(std::cin,harc);
        fileo << "Question) " << harc << std::endl;
        
        for(int i = 0, j = 1; i < 4; ++i, ++j)
        {
            std::cout << "Enter answer N = "<< i << std::endl;
            std::getline(std::cin,answer[i]);
            fileo << j << ") ";
            fileo << answer[i] << std::endl;
        }
        std::cout << "Select true answer Number";
        std::cin >> is_true;
        fileo << is_true;
        fileo << '\n';
        questions.push_back(new exam(harc,answer,is_true));
        fileo.close();
    }

    private:
        std::string harc;
        char is_true;
        std::string answer[4];
        std::ofstream fileo;
        std::vector<exam*> questions;

};
class student
{
    public:
    void exam()
    {
        int count = 0;
        std::string answer;
        std::string line;
        std::string FileName;
        std::cout << "Enter less for exam" << std::endl;
        std::cin >> FileName;
        std::ifstream ifile(FileName + ".txt");
       if(ifile.is_open()){
        while(getline(ifile,line))
        {
            count++;
            if(count == 6)
            {
                count = 0;
                std::cout << "Enter true answer: "<< std::endl;
                std::cin >> answer;
                if(answer == line)
                {
                    std::cout << "True answer!!!" << std::endl;
                    std::cout << "True answer is: " << line << std::endl;
                }
                else
                {
                    std::cout << "False answer" << std::endl;
                    std::cout << "True answer is: " << line << std::endl;
                }
                continue;
            }
            std::cout << line << std::endl;
        }
    }
        ifile.close();
    }
};

#endif //form_h