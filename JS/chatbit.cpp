import random

# define some responses
responses = {
    "hi": "Hello!",
    "how are you": "I'm doing well, thanks for asking.",
    "what's your name": "My name is Chatbot!",
    "default": "I'm sorry, I don't understand. Can you please rephrase your question?"
}

# main function to handle the conversation
def chat():
    print("Welcome to Chatbot!")
    while True:
        user_input = input("You: ").lower()
        if user_input == "bye":
            print("Chatbot: Goodbye!")
            break
        # choose a response from the dictionary
        response = responses.get(user_input, responses["default"])
        print("Chatbot:", response)

if __name__ == '__main__':
    chat()
