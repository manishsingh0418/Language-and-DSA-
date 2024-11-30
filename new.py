def get_possible_digits(valid_digits, faulty_digit):
    potential_digits = []
    
    for digit, pattern in valid_digits.items():
        mismatches = 0
        for i in range(len(faulty_digit)):
            if faulty_digit[i] != pattern[i]:
                mismatches += 1
        
        if mismatches <= 1:
            potential_digits.append(digit)
    
    return potential_digits

def get_combinations(possible_numbers):
    result = []
    get_combinations_helper(possible_numbers, 0, [], result)
    return result

def get_combinations_helper(possible_numbers, index, current_combination, result):
    if index == len(possible_numbers):
        result.append(current_combination[:])
        return

    for digit in possible_numbers[index]:
        current_combination.append(digit)
        get_combinations_helper(possible_numbers, index + 1, current_combination, result)
        current_combination.pop()

def solve():
    # Reading the 7-segment display patterns for 10 digits
    segment_display = [input().strip() for _ in range(3)]
    
    # Reading the faulty 7-segment input
    faulty_display = [input().strip() for _ in range(3)]  # Updated variable name

    # Building digit patterns for 0-9
    digit_patterns = {}
    for digit in range(10):
        pattern = ''.join(segment_display[row][digit * 3:(digit + 1) * 3] for row in range(3))
        digit_patterns[digit] = pattern

    possible_numbers = []
    
    # Iterating through each faulty digit
    for i in range(len(faulty_display[0]) // 3):  # Parsing faulty display segments
        faulty_digit = ''.join(faulty_display[row][i * 3:(i + 1) * 3] for row in range(3))
        matching_digits = get_possible_digits(digit_patterns, faulty_digit)

        if not matching_digits:  # No valid digit matches
            print("Invalid")
            return
        possible_numbers.append(matching_digits)

    # Calculating the sum of all possible combinations
    total_sum = 0
    for combination in get_combinations(possible_numbers):
        number = ''.join(map(str, combination))
        total_sum += int(number)

    print(total_sum)

if __name__ == "__main__":  # Fixed entry point
    solve()
