# 💰 Simple Digital Wallet System

A secure and feature-rich **C++ desktop application** for managing digital wallet operations. This system supports a **graphical user interface (GUI)** for user-friendly interactions (built with **Qt**). It facilitates account management, transactions, and admin control using persistent **JSON-based storage**.

---

## 📌 Features Overview

### 🔒 User Authentication & Management
- Secure sign-up with validation for password strength and unique usernames.
- Login system with account lockout after repeated failed attempts.
- Password hashing using **libsodium** for strong security.
- Admin and user login differentiation.

### 👤 Admin Functionalities
- View all users with editable details.
- Suspend, activate, or delete user accounts.
- Change user passwords.
- View all transactions or by specific user.
- Sort transactions by date (ascending/descending).

### 💸 Transaction System
- Send and request money with real-time balance checks.
- Transaction approval/rejection for requests.
- Every transaction is saved with a timestamp, sender/receiver info, and status.

### 🧾 Data Persistence
- Uses `nlohmann/json` to read/write user and transaction data.
- Data stored in `usersData.json` and `transactionsData.json`.
- Ensures data consistency even after system shutdown.

---

## 🧠 System Architecture

### 1. Backend Logic and Internal Processes

#### 🔐 Sign Up
- **Password Strength Validation**: Checks for uppercase, lowercase, numbers, and special characters.
- **User Existence Check**: Prevents duplicate usernames.
- **Data Validation**: Ensures all inputs follow the correct format.
- **Constructor**: Initializes the user and saves to data structures.

#### 🔓 Login
- **Admin Authentication**: Verifies against admin credentials.
- **User Authentication**: Matches stored hashed passwords.
- **Account Locking**: Temporarily locks accounts after multiple failed logins.

#### 👤 User Class
Encapsulates:
- Private attributes: `firstName`, `lastName`, `username`, `email`, `password`, `phoneNumber`, `id`, `balance`.
- Setters/getters, activate/suspend methods.

#### ⚙️ User Management
- `createAccount()`: Adds a new user with a hashed password.
- `searchAccount()`: Searches user using hashed credentials.
- `suspendUser()`, `activateUser()`, `deleteUser()`: Admin functions.
- `hashPass()`, `toHexString()`: Uses libsodium to hash and convert password securely.

---

### 2. Transactions

#### 💳 Transaction Class
- Stores `sender`, `recipient`, `amount`, `status`, `time`, and `ID`.
- Automatically saved in appropriate structures via `saveTransactions_to_structures()`.

#### 🔁 Transaction Management
- `sendMoney()`: Validates users, checks balance, transfers funds.
- `requestMoney()`: Sends a request instead of direct transfer.
- `approveRequest()`: Accept or reject pending money requests.
- `pushing_Ids_of_current_user_to_set()`: Collects user's transaction IDs.

---

### 3. File Handling

#### 📁 FileHandler Class
Handles JSON operations:
- Constructor / Destructor: Automatically loads/saves data.
- `saveUsersToFile()` / `loadUsersFromFile()`
- `saveTransactionsToFile()` / `loadTransactionsFromFile()`
- `formatTimePoint()`: Converts timestamps to readable format.

---

## 🖥️ Graphical User Interface (GUI) Module

Built to enhance usability with a simple, clean design using **Qt**.

### 🏠 Home Page
- Split view: right (login) and left (sign-up).
- Password field toggle: show/hide.
- Shows warnings for weak passwords or existing usernames.

### 🔐 Login Page
- Username and password input.
- Supports password visibility toggle and back navigation.

### 🛠 Admin Interface

#### ➕ Add New User
- Mimics registration rules from the backend.

#### 👁 View Users
- **Right Pane**: User list (username, phone, balance).
- **Left Pane**: Detailed user info with editable fields.

##### Admin controls:
- Edit profile
- Suspend/Activate
- Delete
- Change password
- View individual transactions

#### 📜 View All Transactions
- Displayed in list view.
- Supports sorting by time (asc/desc).

---

### 👤 User Interface

#### 💰 Balance
- Real-time balance updates after transactions.

#### ✏️ Edit Profile
- Change personal info.
- Delete account.
- Change password.

#### 💸 Send & Request Money
- Choose recipient, enter amount, click Done.
- Displays success or relevant error messages.

#### 📥 Money Requests
- View pending requests.
- Accept or reject.
- Auto-updates status and balance on decision.

#### 📄 Transaction History
- View all personal transactions.
- Sort by date.

---

## ⚙️ Technologies Used

- **C++** (OOP, STL, file handling)
- **nlohmann/json** (JSON parsing)
- **libsodium** (Secure password hashing)
- **Qt** (GUI layer)
- **JSON file storage** (No external database)
