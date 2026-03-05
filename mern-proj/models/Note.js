const mongoose = require("mongoose");

const NoteSchema = new mongoose.Schema({
  studentId: { type: mongoose.Schema.Types.ObjectId, ref: "Student" },
  title: String,
  message: String,
  date: { type: Date, default: Date.now }
});

module.exports = mongoose.model("Note", NoteSchema);
