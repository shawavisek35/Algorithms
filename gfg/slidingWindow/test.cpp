// Your friend is a victim of a ransomware attack, and each message in his chat history has been encrypted. Each message was replaced by an encrypted message, plus the first 20 letters of the original message and a mysterious number.

// Your friend would like to recover the chat messages but does not want to pay the attacker, so he asked for your help. You retrieved a copy of the ransomware, and after reverse-engineering it, you found the following:

// The encryption was performed by swapping letter pairs in the message. For example, if the software decided to swap the letters "A" and "K," then all "A"s would be replaced with "K"s, and all "K"s would be replaced with "A"s. Spaces are left intact, and each message is encrypted independently, meaning the letter pairs learned in the first message cannot be used to decrypt the second message.

// The mystery number is a 31-bit integer computed from the original message using the following algorithm:

