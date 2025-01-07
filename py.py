def main():
  plate = input("Plate: ")
  if is_valid(plate):
    print("Valid")
  else:
    print("Invalid")
  def is_valid(s):
    # Rule 1: Length between 2 and 6 characters
    if len(s) < 2 or len(s) > 6:
      return False
    # Rule 2: Must start with at least two letters
    if not s[0:2].isalpha():
      return False
    # Rule 3: No numbers in the middle, numbers must come at the end
    # Find the first number
    num_started = False
    for i in range(len(s)):
      if s[i].isdigit():
        num_started = True
      elif num_started and s[i].isalpha():
        return False
      if any(not c.isalnum() for c in s):
        return False
    return True